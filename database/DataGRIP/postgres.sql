CREATE TABLE condition (
    lesson_status_id INTEGER NOT NULL,
    subject_id       INTEGER NOT NULL
);

ALTER TABLE condition ADD CONSTRAINT condition_pk PRIMARY KEY ( lesson_status_id,
                                                                subject_id );

CREATE TABLE ids (
    student_id INTEGER NOT NULL,
    teacher_id INTEGER NOT NULL
);

ALTER TABLE ids ADD CONSTRAINT ids_pk PRIMARY KEY ( student_id,
                                                    teacher_id );

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

CREATE TABLE lesson_status (
    mark    INTEGER,
    id      INTEGER NOT NULL,
    visited VARCHAR
);

ALTER TABLE lesson_status ADD CONSTRAINT lesson_status_pk PRIMARY KEY ( id );

CREATE TABLE notes (
    note VARCHAR,
    id   INTEGER NOT NULL
);

ALTER TABLE notes ADD CONSTRAINT notes_pk PRIMARY KEY ( id );

CREATE TABLE stud_parent (
    full_name_parent  VARCHAR(4000),
    id                INTEGER NOT NULL,
    phone_numb_parent VARCHAR
);

ALTER TABLE stud_parent ADD CONSTRAINT stud_parent_pk PRIMARY KEY ( id );

CREATE TABLE student (
    full_name_st      VARCHAR,
    gender            VARCHAR,
    id                INTEGER NOT NULL,
    studying_group_id INTEGER NOT NULL,
    gr_num            INTEGER,
    birth_date_st     DATE,
    stud_parent_id    INTEGER NOT NULL
);

CREATE UNIQUE INDEX student__idx ON
    student (
        stud_parent_id
    ASC );

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
    profile VARCHAR
--  ERROR: VARCHAR2 size not specified
    ,
    id      INTEGER NOT NULL
);

ALTER TABLE studying_group ADD CONSTRAINT studying_group_pk PRIMARY KEY ( id );

CREATE TABLE subject (
    sub_name VARCHAR,
    id       INTEGER NOT NULL
);

ALTER TABLE subject ADD CONSTRAINT subject_pk PRIMARY KEY ( id );

CREATE TABLE teacher (
    full_name_t  VARCHAR
--  ERROR: VARCHAR2 size not specified
    ,
    gender       VARCHAR
--  ERROR: VARCHAR2 size not specified
    ,
    id           INTEGER NOT NULL,
    rank         VARCHAR
--  ERROR: VARCHAR2 size not specified
    ,
    phone_number VARCHAR
--  ERROR: VARCHAR2 size not specified
    ,
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

ALTER TABLE condition
    ADD CONSTRAINT condition_lesson_status_fk FOREIGN KEY ( lesson_status_id )
        REFERENCES lesson_status ( id );

ALTER TABLE condition
    ADD CONSTRAINT condition_subject_fk FOREIGN KEY ( subject_id )
        REFERENCES subject ( id );

ALTER TABLE ids
    ADD CONSTRAINT ids_student_fk FOREIGN KEY ( student_id )
        REFERENCES student ( id );

ALTER TABLE ids
    ADD CONSTRAINT ids_teacher_fk FOREIGN KEY ( teacher_id )
        REFERENCES teacher ( id );

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
    ADD CONSTRAINT student_stud_parent_fk FOREIGN KEY ( stud_parent_id )
        REFERENCES stud_parent ( id );

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


INSERT INTO subject ("sub_name", id)
VALUES ('Information Technologies', '1');
INSERT INTO teacher ("full_name_t", gender, id, rank, phone_number, subject_id, birth_date_t)
VALUES ('Basko Aliaksandr', 'M', '1', 'Teacher', '375336648472', '1', '30.09.2000');

select * FROM subject;
select * FROM teacher;
