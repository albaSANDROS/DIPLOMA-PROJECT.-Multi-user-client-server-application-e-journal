CREATE TABLE lesson_condition (
    lesson_status_id INTEGER NOT NULL,
    subject_id       INTEGER NOT NULL
);

ALTER TABLE lesson_condition ADD CONSTRAINT condition_pk PRIMARY KEY ( lesson_status_id,
                                                                subject_id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE lesson (
    type        VARCHAR(1),
    lesson_date DATE,
    id          INTEGER NOT NULL
);

ALTER TABLE lesson ADD CONSTRAINT lesson_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE lesson_note (
    lesson_id INTEGER NOT NULL,
    notes_id  INTEGER NOT NULL
);

ALTER TABLE lesson_note ADD CONSTRAINT lesson_note_pk PRIMARY KEY ( lesson_id,
                                                                    notes_id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE lesson_status (
    mark    INTEGER,
    id      INTEGER NOT NULL,
    visited VARCHAR(1)
-- SQLINES DEMO *** size not specified

);

ALTER TABLE lesson_status ADD CONSTRAINT lesson_status_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE notes (
    note VARCHAR(150),
    id   INTEGER NOT NULL
);

ALTER TABLE notes ADD CONSTRAINT notes_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE student (
    full_name_st      VARCHAR(50),
    gender            VARCHAR(1),
    id                INTEGER NOT NULL,
    studying_group_id INTEGER NOT NULL,
    gr_num            INTEGER,
    birth_date_st     DATE
);

ALTER TABLE student ADD CONSTRAINT student_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE student_note (
    student_id INTEGER NOT NULL,
    notes_id   INTEGER NOT NULL
);

ALTER TABLE student_note ADD CONSTRAINT student_note_pk PRIMARY KEY ( student_id,
                                                                      notes_id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE studying (
    student_id INTEGER NOT NULL,
    subject_id INTEGER NOT NULL
);

ALTER TABLE studying ADD CONSTRAINT studying_pk PRIMARY KEY ( student_id,
                                                              subject_id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE studying_group (
    num     INTEGER,
    profile VARCHAR(10),
    id      INTEGER NOT NULL
);

ALTER TABLE studying_group ADD CONSTRAINT studying_group_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE subject (
    sub_name VARCHAR(25),
    id       INTEGER NOT NULL
);

ALTER TABLE subject ADD CONSTRAINT subject_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE teacher (
    full_name_t  VARCHAR(50),
    gender       VARCHAR(1),
    id           INTEGER NOT NULL,
    rank         VARCHAR(10),
    phone_number VARCHAR(11),
    subject_id   INTEGER NOT NULL,
    birth_date_t DATE
);

ALTER TABLE teacher ADD CONSTRAINT teacher_pk PRIMARY KEY ( id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
CREATE TABLE teacher_note (
    teacher_id INTEGER NOT NULL,
    notes_id   INTEGER NOT NULL
);

ALTER TABLE teacher_note ADD CONSTRAINT teacher_note_pk PRIMARY KEY ( teacher_id,
                                                                      notes_id );

-- SQLINES LICENSE FOR EVALUATION USE ONLY
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
