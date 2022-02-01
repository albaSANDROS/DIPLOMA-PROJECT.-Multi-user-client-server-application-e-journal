CREATE TABLE lesson (
    type        VARCHAR,
    lesson_date DATE,
    id          INTEGER NOT NULL
);

ALTER TABLE lesson ADD CONSTRAINT lesson_pk PRIMARY KEY ( id );

CREATE TABLE lesson_note (
    lesson_id INTEGER NOT NULL,
    notes_id  INTEGER NOT NULL
);

ALTER TABLE lesson_note ADD CONSTRAINT lesson_note_pk PRIMARY KEY ( lesson_id,
                                                                    notes_id );

CREATE TABLE notes (
    note VARCHAR,
    id   INTEGER NOT NULL
);

ALTER TABLE notes ADD CONSTRAINT notes_pk PRIMARY KEY ( id );

CREATE TABLE student (
    full_name_st      VARCHAR,
    gender            VARCHAR,
    id                INTEGER NOT NULL,
    studying_group_id INTEGER NOT NULL,
    gr_num            INTEGER,
    birth_date_st     DATE
);

ALTER TABLE student ADD CONSTRAINT student_pk PRIMARY KEY ( id );

CREATE TABLE student_note (
    student_id INTEGER NOT NULL,
    notes_id   INTEGER NOT NULL
);

ALTER TABLE student_note ADD CONSTRAINT student_note_pk PRIMARY KEY ( student_id,
                                                                      notes_id );

CREATE TABLE studying (
    student_id INTEGER NOT NULL,
    subject_id INTEGER NOT NULL
);

ALTER TABLE studying ADD CONSTRAINT studying_pk PRIMARY KEY ( student_id,
                                                              subject_id );

CREATE TABLE studying_group (
    num     INTEGER,
    profile VARCHAR,
    id      INTEGER NOT NULL
);

ALTER TABLE studying_group ADD CONSTRAINT studying_group_pk PRIMARY KEY ( id );

CREATE TABLE subject (
    sub_name VARCHAR,
    id       INTEGER NOT NULL
);

ALTER TABLE subject ADD CONSTRAINT subject_pk PRIMARY KEY ( id );

CREATE TABLE teacher (
    full_name_t  VARCHAR,
    gender       VARCHAR,
    id           INTEGER NOT NULL,
    rank         VARCHAR,
    phone_number VARCHAR,
    subject_id   INTEGER NOT NULL,
    birth_date_t DATE
);

ALTER TABLE teacher ADD CONSTRAINT teacher_pk PRIMARY KEY ( id );

CREATE TABLE teacher_note (
    teacher_id INTEGER NOT NULL,
    notes_id   INTEGER NOT NULL
);

ALTER TABLE teacher_note ADD CONSTRAINT teacher_note_pk PRIMARY KEY ( teacher_id,
                                                                      notes_id );

CREATE TABLE timetable (
    studying_group_id INTEGER NOT NULL,
    lesson_id         INTEGER NOT NULL
);

ALTER TABLE timetable ADD CONSTRAINT timetable_pk PRIMARY KEY ( studying_group_id,
                                                                lesson_id );

ALTER TABLE lesson_note
    ADD CONSTRAINT lesson_note_lesson_fk FOREIGN KEY ( lesson_id )
        REFERENCES lesson ( id );

ALTER TABLE lesson_note
    ADD CONSTRAINT lesson_note_notes_fk FOREIGN KEY ( notes_id )
        REFERENCES notes ( id );

ALTER TABLE student_note
    ADD CONSTRAINT student_note_notes_fk FOREIGN KEY ( notes_id )
        REFERENCES notes ( id );

ALTER TABLE student_note
    ADD CONSTRAINT student_note_student_fk FOREIGN KEY ( student_id )
        REFERENCES student ( id );

ALTER TABLE student
    ADD CONSTRAINT student_studying_group_fk FOREIGN KEY ( studying_group_id )
        REFERENCES studying_group ( id );

ALTER TABLE studying
    ADD CONSTRAINT studying_student_fk FOREIGN KEY ( student_id )
        REFERENCES student ( id );

ALTER TABLE studying
    ADD CONSTRAINT studying_subject_fk FOREIGN KEY ( subject_id )
        REFERENCES subject ( id );

ALTER TABLE teacher_note
    ADD CONSTRAINT teacher_note_notes_fk FOREIGN KEY ( notes_id )
        REFERENCES notes ( id );

ALTER TABLE teacher_note
    ADD CONSTRAINT teacher_note_teacher_fk FOREIGN KEY ( teacher_id )
        REFERENCES teacher ( id );

ALTER TABLE teacher
    ADD CONSTRAINT teacher_subject_fk FOREIGN KEY ( subject_id )
        REFERENCES subject ( id );

ALTER TABLE timetable
    ADD CONSTRAINT timetable_lesson_fk FOREIGN KEY ( lesson_id )
        REFERENCES lesson ( id );

ALTER TABLE timetable
    ADD CONSTRAINT timetable_studying_group_fk FOREIGN KEY ( studying_group_id )
        REFERENCES studying_group ( id );
